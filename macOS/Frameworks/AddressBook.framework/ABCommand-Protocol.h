//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@protocol ABCommandVisitor;

@protocol ABCommand <NSObject>
- (void)visit:(id <ABCommandVisitor>)arg1;
- (void)execute;

@optional
@property(nonatomic) BOOL ignoresGuardianRestrictions;
- (void)didExecute;
- (void)willExecute;
@end

