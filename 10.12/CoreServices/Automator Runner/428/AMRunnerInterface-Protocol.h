//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class AMWorkflowRunner, NSData, NSDictionary, NSError, NSString;

@protocol AMRunnerInterface
- (bycopy NSData *)archivedInputData;
- (BOOL)shouldDisplayProgressInMenuBar;
- (oneway void)setRunner:(AMWorkflowRunner *)arg1;
- (oneway void)workflowDidError:(bycopy NSError *)arg1;
- (bycopy NSString *)path;
- (bycopy id)input;
- (NSDictionary *)propertyList;
- (id)delegate;
@end

