//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNRoutePlanningDetails;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceReconnector : NSObject
{
    id <MNNavigationServiceReconnectorDelegate> _delegate;
    MNRoutePlanningDetails *_routePlanningDetails;
}

@property(nonatomic) __weak id <MNNavigationServiceReconnectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reconnect;
- (void)finishReconnecting;
- (BOOL)isReconnecting;
- (id)initWithRoutePlanningDetails:(id)arg1;

@end

