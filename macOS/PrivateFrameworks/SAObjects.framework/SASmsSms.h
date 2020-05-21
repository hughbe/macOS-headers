//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAAppInfo, SAPersonAttribute;

@interface SASmsSms : SADomainObject
{
}

+ (id)smsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sms;
@property(copy, nonatomic) NSString *timezoneId;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *sender;
@property(retain, nonatomic) SASmsSms *referencedMessage;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(retain, nonatomic) SAPersonAttribute *msgSender;
@property(copy, nonatomic) NSArray *msgRecipients;
@property(copy, nonatomic) NSString *messageType;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSNumber *isAudioMessage;
@property(nonatomic) BOOL hasGroupName;
@property(copy, nonatomic) NSString *groupNameId;
@property(copy, nonatomic) NSString *groupName;
@property(copy, nonatomic) NSString *effect;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSDate *dateLastMessageReadInThread;
@property(copy, nonatomic) NSString *chatIdentifier;
@property(copy, nonatomic) NSArray *attachments;
@property(copy, nonatomic) NSURL *attachment;
@property(retain, nonatomic) SAAppInfo *appInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

