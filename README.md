# Reason with parcel

## requirement
$ npm install -g bs-platform

## Step by step

1. Create directory
`$ mkdir reason-parcel && cd reason-parcel`

2. Add dependencies
`$ yarn add reason-react parcel-bundler`

3. Resolve package bs-platform
`$ npm link bs-platform`

4. Add bsconfig.json
```
{
  "name": "reason-parcel",
  "sources": [
    "src"
  ],
  "bs-dependencies": [
    "reason-react"
  ],
  "reason": {
    "react-jsx": 2
  },
  "bsc-flags": [
    "-bs-super-errors"
  ],
  "refmt": 3
}
```

5. Add reason files in `src` directory
`$mkdir src && touch src/index.re`

```
ReactDOMRe.renderToElementWithId(<div>(ReasonReact.stringToElement("Hello Reason and Parcel"))</div>, "root");
```

6. Add index.html
```
<!DOCTYPE html>
<html>
    <head>
        <title>React starter app</title>
    </head>
    <body>
        <div id="root"></div>
        <script src="lib/js/src/index.js"></script>
    </body>
</html>
```

7. Add start script
```
"start": "parcel index.html"
```

8. Compile Reason files to JavaScript
`$ bsb -make-world -w`

9. Run Parcel!
`$ yarn start`


# Reference 

[Create a React app with zero configuration using Parcel](http://blog.jakoblind.no/react-parcel/)
