//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNCDPersistenceStack : NSObject
{
    CDUnknownBlockType _backendProvider;
    id _notificationSource;
}

+ (void)_createContactsDirectoryIfNeededAtURL:(id)arg1;
+ (id)defaultContactsStoreDirectoryURL;
+ (id)persistenceStackWithInMemoryBackend;
+ (id)accountIdentifierFromPersistentStoreURL:(id)arg1;
+ (id)accountIdentifierForManagedObject:(id)arg1;
+ (id)persistenceStackWithAccountCollection:(id)arg1;
@property id notificationSource; // @synthesize notificationSource=_notificationSource;
- (id)makePersistenceContext;
- (void)dealloc;
- (id)initWithBackendProvider:(CDUnknownBlockType)arg1;

@end

