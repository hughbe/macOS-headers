//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AKIntelligentSketchLogger : NSObject
{
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)_newLogPathWithShapeName:(id)arg1;
- (id)_fileName:(id)arg1;
- (id)_logsPath;
- (BOOL)_loggingIsEnabled;
- (void)openFinderWindowToLogs;
- (void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2;

@end

