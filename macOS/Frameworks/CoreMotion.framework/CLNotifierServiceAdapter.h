//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol>
{
    struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int>>> _clients;
    struct CLNotifierBase *_notifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLNotifierBase *notifier; // @synthesize notifier=_notifier;
@property(readonly, copy) NSString *debugDescription;
- (int)notifierClientNumForCoparty:(id)arg1;
- (void)forget:(byref id)arg1;
- (void)unregister:(byref id)arg1 forNotification:(int)arg2;
- (void)register:(byref id)arg1 forNotification:(int)arg2 registrationInfo:(id)arg3;
- (void)invalidate;
- (void)setAdaptedNotifier:(struct CLNotifierBase *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) BOOL valid;

@end

