//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface iTermJobProxy : NSObject
{
    NSString *_fullName;
    BOOL _known;
    int _pid;
    NSMutableArray *_children;
    NSString *_name;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL known; // @synthesize known=_known;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (id)description;
- (void)moveFrom:(id)arg1;
- (id)initWithProcessInfo:(id)arg1;

@end

