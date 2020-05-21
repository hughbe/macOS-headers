//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface UserStyleSheetGenerator : NSObject
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)archiveStyleSheet;
- (id)userStyleSheetStringWithTopMargin:(double)arg1 bottomMargin:(double)arg2;
- (id)userStyleSheetWithTopMargin:(double)arg1 bottomMargin:(double)arg2;
@property(readonly, nonatomic) NSURL *userStyleSheetURLForSingleNoteWindow;
@property(readonly, nonatomic) NSURL *userStyleSheetURLForMainWindow;
@property(readonly, nonatomic) NSString *userStyleSheetStringForMainWindow;
- (void)dealloc;
- (id)init;

@end

