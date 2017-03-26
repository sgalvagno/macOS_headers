//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactCardViewController, CNContactCardViewControllerDataSourceDelegate, CNContactNameViewController;

@interface CNContactCardViewControllerABPersonViewMediator : NSObject
{
    CNContactCardViewController *_contactCardViewController;
    CNContactNameViewController *_contactNameViewController;
    CNContactCardViewControllerDataSourceDelegate *_dataSourceDelegate;
}

@property(nonatomic) __weak CNContactCardViewControllerDataSourceDelegate *dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(nonatomic) __weak CNContactNameViewController *contactNameViewController; // @synthesize contactNameViewController=_contactNameViewController;
@property(nonatomic) __weak CNContactCardViewController *contactCardViewController; // @synthesize contactCardViewController=_contactCardViewController;
- (void).cxx_destruct;
- (BOOL)editing;
- (void)setEditing:(BOOL)arg1;
- (void)dataSourceChangesShouldPersistOnABPerson:(BOOL)arg1;
- (void)setCustomNameView:(id)arg1;
- (id)initWithCardViewController:(id)arg1 contactNameViewController:(id)arg2 dataSourceDelegate:(id)arg3;

@end

