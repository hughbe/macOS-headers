//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/FMKeychainItem-Protocol.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMInternalKeychainItem : NSObject <FMKeychainItem>
{
    NSString *_password;
    NSDate *_lastModifyDate;
    NSDate *_creationDate;
    NSData *_rawData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDate *lastModifyDate; // @synthesize lastModifyDate=_lastModifyDate;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (id)initWithResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

