//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class NSDateComponents, NSSet, NSString;

@interface DDSAssetPolicy : NSObject <NSSecureCoding>
{
    BOOL _downloadOverCellular;
    BOOL _downloadWithoutPower;
    long long _preferredDownloadFrequency;
    NSSet *_notificationDownloadTriggers;
    NSString *_downloadCompletionNotification;
    NSDateComponents *_idleUsageEvictionPeriod;
}

+ (BOOL)supportsSecureCoding;
+ (id)assetPolicy;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod; // @synthesize idleUsageEvictionPeriod=_idleUsageEvictionPeriod;
@property(copy, nonatomic) NSString *downloadCompletionNotification; // @synthesize downloadCompletionNotification=_downloadCompletionNotification;
@property(copy, nonatomic) NSSet *notificationDownloadTriggers; // @synthesize notificationDownloadTriggers=_notificationDownloadTriggers;
@property(nonatomic) BOOL downloadWithoutPower; // @synthesize downloadWithoutPower=_downloadWithoutPower;
@property(nonatomic) BOOL downloadOverCellular; // @synthesize downloadOverCellular=_downloadOverCellular;
@property(nonatomic) long long preferredDownloadFrequency; // @synthesize preferredDownloadFrequency=_preferredDownloadFrequency;
- (unsigned long long)hash;
- (BOOL)isEqualToAssetPolicy:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

