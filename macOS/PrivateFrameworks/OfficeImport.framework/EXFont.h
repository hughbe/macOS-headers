//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFont : NSObject
{
}

+ (id)edFontFromXmlFontElement:(struct _xmlNode *)arg1 inConditionalFormat:(BOOL)arg2 returnDefaultIfEmpty:(BOOL)arg3 state:(id)arg4;
+ (id)vertAlignEnumMap;
+ (id)underlineEnumMap;
+ (int)edUnderlineFromXmlUnderlineElement:(struct _xmlNode *)arg1;
+ (int)edScriptFromXmlVertAlignElement:(struct _xmlNode *)arg1;

@end

