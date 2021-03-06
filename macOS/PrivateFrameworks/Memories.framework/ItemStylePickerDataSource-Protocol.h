//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/NSObject-Protocol.h>

@class NSIndexPath, NSString;

@protocol ItemStylePickerDataSource <NSObject>
- (NSIndexPath *)indexPathOfItemName:(NSString *)arg1;
- (NSString *)itemNameAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItems;

@optional
- (NSIndexPath *)indexPathOfItemID:(NSString *)arg1;
- (NSString *)itemIDAtIndexPath:(NSIndexPath *)arg1;
@end

