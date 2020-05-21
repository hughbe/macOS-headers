//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRGroup.h>

__attribute__((visibility("hidden")))
@interface SCRFinderGroup : SCRGroup
{
    unsigned long long _numOfAXChildren;
}

- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (id)_columnViewTextElementChild;
- (void)prepareBrailleItemDescriptionForRequest:(id)arg1 hasBrailleFocus:(BOOL)arg2;
- (void)addItemDescriptionToRequest:(id)arg1;
- (id)typeDescription;
- (void)handleSelectionChange:(id)arg1;
- (BOOL)_isFinderHeaderStyleIconView;
- (BOOL)_containsListChildren;
- (BOOL)needToRebuildChildren;
- (void)setChildren:(id)arg1;

@end

