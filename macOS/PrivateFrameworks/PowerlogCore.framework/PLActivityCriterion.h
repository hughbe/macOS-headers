//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject
{
    BOOL _satisfied;
    id <PLActivityCriterionDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <PLActivityCriterionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL satisfied; // @synthesize satisfied=_satisfied;
- (void)didDisableActivity:(id)arg1;
- (void)didInterruptActivity:(id)arg1;
- (void)didCompleteActivity:(id)arg1;
- (void)didEnableActivity:(id)arg1;
- (id)init;

@end

