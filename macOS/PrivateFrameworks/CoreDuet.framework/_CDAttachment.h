//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_creationDate;
    NSString *_uti;
    NSUUID *_identifier;
    NSUUID *_cloudIdentifier;
    NSString *_photoLocalIdentifier;
    NSNumber *_size;
    NSURL *_contentURL;
    NSString *_contentText;
}

+ (BOOL)supportsSecureCoding;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
- (void).cxx_destruct;
@property(retain) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(retain) NSNumber *size; // @synthesize size=_size;
@property(retain) NSString *photoLocalIdentifier; // @synthesize photoLocalIdentifier=_photoLocalIdentifier;
@property(retain) NSUUID *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *uti; // @synthesize uti=_uti;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 photoLocalIdentifier:(id)arg3 type:(id)arg4 sizeInBytes:(id)arg5 creationDate:(id)arg6 contentURL:(id)arg7 contentText:(id)arg8;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;

@end

