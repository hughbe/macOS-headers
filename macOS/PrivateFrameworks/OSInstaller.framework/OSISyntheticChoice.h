//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DistributionKit/PKDistributionChoiceItem.h>

@class NSString;

@interface OSISyntheticChoice : PKDistributionChoiceItem
{
    BOOL _enabled;
    BOOL _canBeDisabled;
    NSString *_identifier;
    long long _cellState;
}

- (void).cxx_destruct;
- (id)identifier;
- (BOOL)visible;
- (BOOL)startSelected;
- (id)visibleChildren;
- (id)packageReferencesToInstallIgnoringChildren;
- (id)packageReferencesToInstall;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)canBeDisabled;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (id)choice;
- (id)initWithChoiceItems:(id)arg1 title:(id)arg2 identifier:(id)arg3 canBeDisabled:(BOOL)arg4;

@end

