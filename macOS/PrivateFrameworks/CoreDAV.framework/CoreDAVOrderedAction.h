//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction
{
    int _absoluteOrder;
    NSURL *_priorURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *priorURL; // @synthesize priorURL=_priorURL;
@property(readonly, nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;

@end

