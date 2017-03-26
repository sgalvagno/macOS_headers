//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SVCProperty : NSObject
{
    BOOL _readOnly;
    BOOL _nonAtomic;
    BOOL _weakReference;
    NSString *_name;
    NSString *_instanceVariableName;
    long long _type;
    Class _objectClass;
    long long _association;
    SEL _customGetterSelector;
    SEL _customSetterSelector;
}

+ (id)propertiesForProtocol:(id)arg1;
+ (id)propertiesForClass:(Class)arg1;
+ (void)initialize;
@property(readonly, getter=isWeakReference) BOOL weakReference; // @synthesize weakReference=_weakReference;
@property(readonly) SEL customSetterSelector; // @synthesize customSetterSelector=_customSetterSelector;
@property(readonly) SEL customGetterSelector; // @synthesize customGetterSelector=_customGetterSelector;
@property(readonly) long long association; // @synthesize association=_association;
@property(readonly, getter=isNonAtomic) BOOL nonAtomic; // @synthesize nonAtomic=_nonAtomic;
@property(readonly, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(readonly) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *instanceVariableName; // @synthesize instanceVariableName=_instanceVariableName;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;

@end

