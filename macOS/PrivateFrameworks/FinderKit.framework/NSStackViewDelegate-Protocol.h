//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSArray, NSStackView;

@protocol NSStackViewDelegate <NSObject>

@optional
- (void)stackView:(NSStackView *)arg1 didReattachViews:(NSArray *)arg2;
- (void)stackView:(NSStackView *)arg1 willDetachViews:(NSArray *)arg2;
@end

