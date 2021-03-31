#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/Bucket.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/CreateBucketRequest.h>
#include <aws/s3/model/DeleteBucketRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <string>
using namespace std;

#define TESTBUCKET_CREATE	"bucketface100"
#define TESTBUCKET_FETCH        "leakybucket100"
#define FETCH_FILENAME          "a.txt"

#define PAUSE() do { \
    string tmp;  \
    cout << "Press <enter> to continue..."; \
    getline(cin, tmp); \
} while (0)

bool ListMyBuckets(Aws::S3::S3Client s3_client);
bool CreateMyBucket(Aws::S3::S3Client s3_client, Aws::String bucket_name);
bool DeleteMyBucket(Aws::S3::S3Client s3_client, Aws::String bucket_name);
void Cleanup(Aws::SDKOptions options);

int main(int argc, char** argv) {

  cout << "Welcome to the COMSC 210 sample program for S3."
       << endl;

  Aws::String bucket_name = TESTBUCKET_CREATE;
  Aws::Client::ClientConfiguration client_configuration;
  Aws::SDKOptions options;

  // Initialize the API with the above options.
  Aws::InitAPI(options);

  // Create an S3 client.
  Aws::S3::S3Client s3_client(client_configuration);

  // List all available buckets.
  if (!ListMyBuckets(s3_client)) {
      Cleanup(options);
  }

 // Create the requested bucket
 if (!CreateMyBucket(s3_client, bucket_name)) {
      Cleanup(options);
 }

 // List all of the buckets under this account.
 if (!ListMyBuckets(s3_client)) {
      Cleanup(options);
 }

 // Delete this bucket we just created.
 if (!DeleteMyBucket(s3_client, bucket_name)) {
     Cleanup(options);
 }

 // List them again once more.
 if (!ListMyBuckets(s3_client)) {
      Cleanup(options);
 }
 
  Cleanup(options);
}

// List all of your available buckets.
bool ListMyBuckets(Aws::S3::S3Client s3_client) {
  auto outcome = s3_client.ListBuckets();

  if (outcome.IsSuccess()) {
    cout << "Current bucket list:" << endl << endl;

    Aws::Vector<Aws::S3::Model::Bucket> bucket_list =
      outcome.GetResult().GetBuckets();

    for (auto const &bucket: bucket_list) {
      cout << bucket.GetName() << endl;
    }

    cout << endl;
    PAUSE();
    return true;
  } else {
    cout << "ListBuckets error: "
              << outcome.GetError().GetExceptionName() << endl
              << outcome.GetError().GetMessage() << endl;

    PAUSE();
    return false;
  }
}

// Create a bucket in this AWS Region.
bool CreateMyBucket(Aws::S3::S3Client s3_client, Aws::String bucket_name) {
    //Aws::S3::Model::BucketLocationConstraint region) {
  cout << "Creating a new bucket named '"
            << bucket_name
            << "'..." << endl << endl;

  Aws::S3::Model::CreateBucketConfiguration bucket_configuration;
  //bucket_configuration.WithLocationConstraint(region);

  Aws::S3::Model::CreateBucketRequest bucket_request;
  bucket_request.WithBucket(bucket_name).WithCreateBucketConfiguration(bucket_configuration);

  auto outcome = s3_client.CreateBucket(bucket_request);

  if (outcome.IsSuccess()) {
    cout << "Successful." << endl;
    PAUSE();
    return true;
  } else {
    cout << "CreateBucket error: "
              << outcome.GetError().GetExceptionName() << endl
              << outcome.GetError().GetMessage() << endl;
    PAUSE();
    return false;
  }
}

// Delete the bucket you just created.
bool DeleteMyBucket(Aws::S3::S3Client s3_client, Aws::String bucket_name) {
  cout << "Deleting the bucket named '"
            << bucket_name
            << "'..." << endl << endl;

  Aws::S3::Model::DeleteBucketRequest bucket_request;
  bucket_request.WithBucket(bucket_name);

  auto outcome = s3_client.DeleteBucket(bucket_request);

  if (outcome.IsSuccess()) {
    return true;
  } else {
    cout << "DeleteBucket error: "
              << outcome.GetError().GetExceptionName() << endl
              << outcome.GetError().GetMessage() << endl;

    return false;
  }
}

void Cleanup(Aws::SDKOptions options) {
  Aws::ShutdownAPI(options);
}
