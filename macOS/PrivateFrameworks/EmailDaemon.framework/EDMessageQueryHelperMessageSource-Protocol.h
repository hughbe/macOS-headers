//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EFQuery, NSArray;

@protocol EDMessageQueryHelperMessageSource
@property(readonly, nonatomic) EFQuery *query;
- (NSArray *)messagesWithAdditionalPredicates:(NSArray *)arg1 limit:(long long)arg2;
@end

