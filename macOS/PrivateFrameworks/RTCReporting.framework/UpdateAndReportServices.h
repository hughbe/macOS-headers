//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UpdateAndReportServices : NSObject
{
    _Bool _update;
    _Bool _report;
    CDUnknownBlockType _block;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly) _Bool report; // @synthesize report=_report;
@property(readonly) _Bool update; // @synthesize update=_update;
- (void)dealloc;
- (id)initWithServices:(_Bool)arg1 needToReport:(_Bool)arg2 service:(CDUnknownBlockType)arg3;

@end

