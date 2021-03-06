//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_path;

@interface CPLNetworkState : NSObject
{
    NSObject<OS_nw_path> *_networkPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_nw_path> *networkPath; // @synthesize networkPath=_networkPath;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)description;
@property(readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property(readonly, nonatomic, getter=isCellular) BOOL cellular;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
- (id)initWithNetworkPath:(id)arg1;

@end

