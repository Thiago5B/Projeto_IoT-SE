<!DOCTYPE html>

Click on Cofiguration, then Data SOurcers. Add data source button and search for AWS Timestream then add it

With the AWS Timestream added, open it and select a name of your choice.

Then, on Connection Details, select the informations that better fit for your project. In our case, the chosen options were:
- AUthentication Provided: Workspace IAM Role
- Assume ROle ARN: arn:aws:iam:*
- External ID: External ID
- Endpoint: https://query-(cell).timestream.(region).amazonaws.com
- Default Region: us-east-2

  Then, on Timestream Details, choose which <strong>Database</strong>, then which <strong>Table</strong>, and finnaly  which <strong>Measure</strong> you will receive your data from.
