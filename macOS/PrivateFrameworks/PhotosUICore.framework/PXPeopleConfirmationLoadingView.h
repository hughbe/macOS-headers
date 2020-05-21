//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSProgressIndicator, UXLabel;
@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UXView
{
    unsigned long long _loadingState;
    UXView *_loadingStatusView;
    UXLabel *_noneFoundLabel;
    NSProgressIndicator *_loadingIndicator;
    id <PXPerson> _person;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(readonly, nonatomic) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) UXLabel *noneFoundLabel; // @synthesize noneFoundLabel=_noneFoundLabel;
@property(readonly, nonatomic) UXView *loadingStatusView; // @synthesize loadingStatusView=_loadingStatusView;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2 localizedName:(id)arg3;

@end

