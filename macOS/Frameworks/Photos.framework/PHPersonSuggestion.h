//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject
{
    BOOL _confirmed;
    PHFace *_keyFace;
    PHPerson *_person;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) PHFace *keyFace; // @synthesize keyFace=_keyFace;
- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(BOOL)arg3;

@end

