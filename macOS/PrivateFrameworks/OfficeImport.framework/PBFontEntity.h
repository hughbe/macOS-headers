//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PBFontEntity : NSObject
{
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (void).cxx_destruct;
- (int)family;
- (int)type;
- (int)charSet;
- (id)faceName;
- (id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;

@end

