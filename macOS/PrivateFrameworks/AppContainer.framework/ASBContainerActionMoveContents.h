//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppContainer/ASBContainerAction.h>

@class NSString;

@interface ASBContainerActionMoveContents : ASBContainerAction
{
    NSString *_sourceSpec;
    NSString *_destSpec;
}

- (void).cxx_destruct;
- (BOOL)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;

@end

