//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    double _duration;
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property double executing; // @synthesize executing=_executing;
@property double queueing; // @synthesize queueing=_queueing;
@property double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)unionMetric:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

