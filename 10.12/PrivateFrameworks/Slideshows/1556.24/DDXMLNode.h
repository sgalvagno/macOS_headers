//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/NSCopying-Protocol.h>

@interface DDXMLNode : NSObject <NSCopying>
{
    struct _xmlKind *genericPtr;
    struct _xmlNode *nsParentPtr;
}

+ (id)lastError;
+ (void)removeAllChildrenFromDoc:(struct _xmlDoc *)arg1;
+ (void)removeAllChildrenFromNode:(struct _xmlNode *)arg1;
+ (void)removeChild:(struct _xmlNode *)arg1 fromNode:(struct _xmlNode *)arg2;
+ (void)detachChild:(struct _xmlNode *)arg1 fromNode:(struct _xmlNode *)arg2;
+ (void)detachChild:(struct _xmlNode *)arg1 fromNode:(struct _xmlNode *)arg2 andNullifyPointers:(BOOL)arg3;
+ (void)removeAllNamespacesFromNode:(struct _xmlNode *)arg1;
+ (void)removeNamespace:(struct _xmlNs *)arg1 fromNode:(struct _xmlNode *)arg2;
+ (void)detachNamespace:(struct _xmlNs *)arg1 fromNode:(struct _xmlNode *)arg2;
+ (void)removeAllAttributesFromNode:(struct _xmlNode *)arg1;
+ (void)removeAttribute:(struct _xmlAttr *)arg1 fromNode:(struct _xmlNode *)arg2;
+ (void)detachAttribute:(struct _xmlAttr *)arg1 fromNode:(struct _xmlNode *)arg2;
+ (void)nodeFree:(struct _xmlNode *)arg1;
+ (void)recursiveStripDocPointersFromNode:(struct _xmlNode *)arg1;
+ (void)stripDocPointersFromAttr:(struct _xmlAttr *)arg1;
+ (BOOL)isXmlNsPtr:(struct _xmlKind *)arg1;
+ (BOOL)isXmlDtdPtr:(struct _xmlKind *)arg1;
+ (BOOL)isXmlDocPtr:(struct _xmlKind *)arg1;
+ (BOOL)isXmlNodePtr:(struct _xmlKind *)arg1;
+ (BOOL)isXmlAttrPtr:(struct _xmlKind *)arg1;
+ (id)prefixForName:(id)arg1;
+ (id)localNameForName:(id)arg1;
+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 nsParent:(struct _xmlNode *)arg2;
+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1;
+ (id)textWithStringValue:(id)arg1;
+ (id)commentWithStringValue:(id)arg1;
+ (id)processingInstructionWithName:(id)arg1 stringValue:(id)arg2;
+ (id)namespaceWithName:(id)arg1 stringValue:(id)arg2;
+ (id)attributeWithName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1 URI:(id)arg2;
+ (id)elementWithName:(id)arg1 children:(id)arg2 attributes:(id)arg3;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (void)initialize;
- (void)nodeRelease;
- (void)nodeRetain;
- (BOOL)hasParent;
- (BOOL)isXmlNsPtr;
- (BOOL)isXmlDtdPtr;
- (BOOL)isXmlDocPtr;
- (BOOL)isXmlNodePtr;
- (BOOL)isXmlAttrPtr;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (id)XMLStringWithOptions:(unsigned long long)arg1;
- (id)XMLString;
- (id)description;
- (id)URI;
- (void)setURI:(id)arg1;
- (id)prefix;
- (id)localName;
- (id)XPath;
- (void)detach;
- (id)nextNode;
- (id)previousNode;
- (id)nextSibling;
- (id)previousSibling;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)children;
- (unsigned long long)childCount;
- (id)parent;
- (id)rootDocument;
- (unsigned long long)level;
- (unsigned long long)index;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)kind;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCheckedPrimitive:(struct _xmlKind *)arg1 nsParent:(struct _xmlNode *)arg2;
- (id)initWithUncheckedPrimitive:(struct _xmlKind *)arg1 nsParent:(struct _xmlNode *)arg2;
- (id)initWithCheckedPrimitive:(struct _xmlKind *)arg1;
- (id)initWithUncheckedPrimitive:(struct _xmlKind *)arg1;

@end

