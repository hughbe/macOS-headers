//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface _GEOMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;
}

- (void).cxx_destruct;
- (void)_replaceObservedProgressWith:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_update;
- (void)_unregisterForKVO;
- (void)_registerForKVO;
- (void)dealloc;
- (id)_initWithMirroredProgressForSubclasses:(id)arg1;
- (id)initWithMirroredProgress:(id)arg1;

@end

