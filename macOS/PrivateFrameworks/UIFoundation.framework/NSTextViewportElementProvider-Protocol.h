//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@protocol NSTextLocation;

@protocol NSTextViewportElementProvider <NSObject>
- (void)enumerateViewportElementsFromLocation:(id <NSTextLocation>)arg1 options:(long long)arg2 usingBlock:(void (^)(id <NSTextViewportElement>, char *))arg3;
@end

