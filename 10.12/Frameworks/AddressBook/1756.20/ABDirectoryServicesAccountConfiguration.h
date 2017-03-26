//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABAbstractAccountConfiguration.h>

@class ABDirectoryServicesConnectivityTest, ABUserDefaults, NSString;

__attribute__((visibility("hidden")))
@interface ABDirectoryServicesAccountConfiguration : ABAbstractAccountConfiguration
{
    ABUserDefaults *_preferences;
    NSString *_accountIdentifier;
    BOOL _didCheckDirectoryServicesConnectivity;
    ABDirectoryServicesConnectivityTest *_directoryServicesConnectivityTest;
}

@property(retain) ABDirectoryServicesConnectivityTest *directoryServicesConnectivityTest; // @synthesize directoryServicesConnectivityTest=_directoryServicesConnectivityTest;
- (void)updateSearchability:(BOOL)arg1;
- (BOOL)shouldCheckDirectoryServicesConnectivity;
- (void)updateSearchabilityIfNeeded;
- (void)postNotifications;
- (BOOL)save:(id *)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (BOOL)primitiveIsEnabled;
@property(nonatomic, getter=isSearchable) BOOL searchable;
- (BOOL)primitiveIsSearchable;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveValueForKey:(id)arg1;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1 preferences:(id)arg2 directoryServicesConnectivityTest:(id)arg3;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithAccount:(id)arg1 persistence:(id)arg2;

@end

