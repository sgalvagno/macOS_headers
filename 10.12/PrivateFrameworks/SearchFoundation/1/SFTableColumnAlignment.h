//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@interface SFTableColumnAlignment : NSObject <NSSecureCoding>
{
    BOOL _isEqualWidth;
    unsigned long long _columnAlignment;
    unsigned long long _dataAlignment;
}

+ (BOOL)supportsSecureCoding;
@property BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property unsigned long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property unsigned long long columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)textAlignment;

@end

