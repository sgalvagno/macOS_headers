//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMessageHeaders, MFPOPConnection, NSData;

@protocol MFPOPConnectionDelegate <NSObject>
@property(readonly, nonatomic) BOOL connectionShouldPrefetchMessages;
- (void)connection:(MFPOPConnection *)arg1 didRetrieveData:(NSData *)arg2 forMessageNumber:(unsigned long long)arg3;
- (long long)connection:(MFPOPConnection *)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(MCMessageHeaders *)arg3 size:(unsigned long long)arg4;
- (void)connection:(MFPOPConnection *)arg1 receivedNumberOfBytes:(unsigned long long)arg2;
@end

