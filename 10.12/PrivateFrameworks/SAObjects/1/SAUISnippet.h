//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, SAUIConfirmationOptions;

@interface SAUISnippet : SAAceView
{
}

+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippet;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *summaryTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property(nonatomic) long long category;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

