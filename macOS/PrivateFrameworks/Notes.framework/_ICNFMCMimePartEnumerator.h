//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class ICNFMCMimePart;

@interface _ICNFMCMimePartEnumerator : NSEnumerator
{
    BOOL _onlyAttachments;
    BOOL _isFirstIteration;
    ICNFMCMimePart *_currentPart;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICNFMCMimePart *currentPart; // @synthesize currentPart=_currentPart;
@property(nonatomic) BOOL isFirstIteration; // @synthesize isFirstIteration=_isFirstIteration;
@property(readonly, nonatomic) BOOL onlyAttachments; // @synthesize onlyAttachments=_onlyAttachments;
- (id)nextObject;
- (id)init;
- (id)initWithMimeBody:(id)arg1 onlyAttachments:(BOOL)arg2;

@end

