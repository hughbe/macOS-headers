//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallDirectoryPhoneNumberEntryData.h>

#import <CallKit/NSCopying-Protocol.h>

@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying>
{
    NSMutableData *_mutablePhoneNumberData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *mutablePhoneNumberData; // @synthesize mutablePhoneNumberData=_mutablePhoneNumberData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendPhoneNumber:(long long)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

