//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC11AppStoreKit12Localization : NSObject
{
    MISSING_TYPE *locale;
    MISSING_TYPE *extendedLocale;
    MISSING_TYPE *localizedStringTables;
    MISSING_TYPE *dateFormatters;
    MISSING_TYPE *dynamicDateFormatters;
    MISSING_TYPE *$__lazy_storage_$_relativeDateFormatter;
}

- (void).cxx_destruct;
- (id)init;
- (id)relativeDate:(id)arg1;
- (id)formatDate:(id)arg1:(id)arg2;
- (id)formatDateInSentence:(id)arg1:(id)arg2:(id)arg3;
- (id)timeAgo:(id)arg1;
- (id)formattedCount:(id)arg1;
- (id)fileSize:(id)arg1;
- (id)stringWithCounts:(id)arg1:(id)arg2;
- (id)stringWithCount:(id)arg1:(long long)arg2;
- (id)string:(id)arg1;
- (id)decimal:(id)arg1:(long long)arg2;
@property(nonatomic, readonly) NSString *arcadeWordmarkAssetName;
@property(nonatomic, readonly) NSString *identifier;

@end

