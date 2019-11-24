from twilio.rest import Client


# Your Account Sid and Auth Token from twilio.com/console
# DANGER! This is insecure. See http://twil.io/secure
account_sid = 'ACc249e2bbb4cbe1d56e6f4c31e97ece8f'
auth_token = 'd4b93c8ea61de8fc384c0d3ab7c943eb'
client = Client(account_sid, auth_token)

call = client.calls.create(
    url='http://demo.twilio.com/docs/voice.xml',
    to='+918528262319',
    from_='+12562448496'
)

print(call.sid)