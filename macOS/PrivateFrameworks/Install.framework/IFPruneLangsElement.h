//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@interface IFPruneLangsElement : IFInstallQueueElement
{
}

+ (BOOL)canRunForPackage:(id)arg1;
- (long long)run;
- (void)_pruneLanguagePaths:(id)arg1 withPackageController:(id)arg2;
- (id)logDescription;

@end

