//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject
{
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (void).cxx_destruct;
- (id)description;
- (void)setColorIndex:(unsigned int)arg1;
- (unsigned int)colorIndex;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (unsigned int)lastCommentIndex;
- (void)setInitials:(id)arg1;
- (id)initials;
- (void)setName:(id)arg1;
- (id)name;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (id)init;

@end

