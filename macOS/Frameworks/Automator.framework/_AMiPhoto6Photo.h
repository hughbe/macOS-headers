//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/_AMiPhoto6Item.h>

@class NSArray, NSDate, NSString;

@interface _AMiPhoto6Photo : _AMiPhoto6Item
{
}

@property(readonly) long long width;
@property(copy) NSString *title;
@property(readonly, copy) NSString *thumbnailPath;
@property(readonly, copy) NSString *thumbnailFilename;
@property(copy) NSString *name;
@property(readonly, copy) NSString *imagePath;
@property(readonly, copy) NSString *imageFilename;
- (long long)id;
@property(readonly) long long height;
@property(readonly, copy) NSArray *dimensions;
@property(copy) NSDate *date;
@property(copy) NSString *comment;
- (id)keywords;

@end

