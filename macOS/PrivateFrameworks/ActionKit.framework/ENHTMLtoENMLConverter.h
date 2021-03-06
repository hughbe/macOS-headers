//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/ENXMLSaxParserDelegate-Protocol.h>
#import <ActionKit/ENXMLWriterDelegate-Protocol.h>

@class ENMLWriter, ENXMLSaxParser, NSMutableString, NSString;
@protocol ENHTMLtoENMLConverterDelegate;

@interface ENHTMLtoENMLConverter : NSObject <ENXMLSaxParserDelegate, ENXMLWriterDelegate>
{
    ENXMLSaxParser *_htmlParser;
    ENMLWriter *_enmlWriter;
    NSMutableString *_enml;
    id <ENHTMLtoENMLConverterDelegate> _delegate;
    BOOL _inHTMLBody;
    int _skipCount;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ENHTMLtoENMLConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)xmlWriterDidEndWritingDocument:(id)arg1;
- (void)xmlWriter:(id)arg1 didGenerateData:(id)arg2;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)cancel;
- (void)finish;
- (void)writeData:(id)arg1;
- (id)enmlFromHTMLContent:(id)arg1;
- (id)enmlFromContentsOfHTMLFile:(id)arg1;
- (id)htmlParser;
- (id)enmlWriter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

