//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@class IFInstallActionsGroup;

@interface IFInstallActionsElement : IFInstallQueueElement
{
    IFInstallActionsGroup *_actions;
}

+ (BOOL)canRunForPackage:(id)arg1;
- (int)runTask:(id)arg1;
- (id)pathForComponentId:(id)arg1;
- (id)actionsGroup;
- (void)setActionsGroup:(id)arg1;
- (long long)run;
- (id)logDescription;
- (void)dealloc;
- (id)init;

@end

