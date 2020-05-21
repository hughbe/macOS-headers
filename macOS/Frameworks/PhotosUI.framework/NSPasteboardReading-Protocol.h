//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, NSPasteboard, NSString;

@protocol NSPasteboardReading <NSObject>
+ (NSArray *)readableTypesForPasteboard:(NSPasteboard *)arg1;

@optional
+ (unsigned long long)readingOptionsForType:(NSString *)arg1 pasteboard:(NSPasteboard *)arg2;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(NSString *)arg2;
@end

