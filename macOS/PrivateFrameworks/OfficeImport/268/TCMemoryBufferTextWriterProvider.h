//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSMutableData;

@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider
{
    NSMutableData *_memoryBuffer;
}

@property(readonly, retain, nonatomic) NSMutableData *memoryBuffer; // @synthesize memoryBuffer=_memoryBuffer;
- (void).cxx_destruct;
- (BOOL)setUp;
- (id)initWithMemoryBuffer:(id)arg1;

@end

