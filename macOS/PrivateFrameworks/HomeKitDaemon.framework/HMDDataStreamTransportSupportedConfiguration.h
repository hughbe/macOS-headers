//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HMDDataStreamTransportSupportedConfiguration : NSObject <NSCopying>
{
    NSMutableArray *_configurations;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *configurations; // @synthesize configurations=_configurations;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithConfigurations:(id)arg1;
- (id)init;

@end

