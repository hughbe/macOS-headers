//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface _CUISubrangeData : NSData
{
    struct _NSRange _range;
    NSData *_data;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;

@end

