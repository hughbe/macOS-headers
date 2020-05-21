//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UXViewController
{
    id <PXPerson> _targetPerson;
    id <PXPerson> _draggedPerson;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PXPerson> draggedPerson; // @synthesize draggedPerson=_draggedPerson;
@property(retain, nonatomic) id <PXPerson> targetPerson; // @synthesize targetPerson=_targetPerson;
- (void)viewDidLoad;
- (struct CGSize)preferredContentSize;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;

@end

