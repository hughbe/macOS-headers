//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSPrintInfoDictionaryProxy;

@interface NSPrintInfoAdditionalIVars : NSObject
{
    struct OpaquePMPrintSession *printSession;
    struct OpaquePMPageFormat *pageFormat;
    struct OpaquePMPrintSettings *printSettings;
    NSData *flattenedPageFormatData;
    NSData *flattenedPrintSettingsData;
    BOOL printSessionIsReconciled;
    BOOL pageFormatIsReconciled;
    BOOL printSettingsIsReconciled;
    BOOL pageFormatIsValidated;
    BOOL printSettingsIsValidated;
    NSPrintInfoDictionaryProxy *attributesDictionaryProxy;
    NSPrintInfoDictionaryProxy *printSettingsDictionaryProxy;
    BOOL printerWasSetExplicitly;
}

@end

